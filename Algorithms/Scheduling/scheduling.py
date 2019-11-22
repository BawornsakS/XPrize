type_dict = {'FCFS': 0, 'SJF': 1, 'Priority': 2, 'RR': 3}


class Event:
    def __init__(self, key, time, preemp=True, priority=1, next=None):
        self.key = key
        self.time = time
        self.preemp = preemp
        self.next = next
        self.priority = priority

    def copy(self):
        new_event = Event(self.key, self.time, self.preemp, self.priority, self.next)
        return new_event


class Sch:
    def __init__(self, type, preemp=False, p_factor=1, RRtime=1):
        self.type = type_dict[type]
        self.factor = p_factor
        self.__event_head = Event('head', 0)
        self.__event_tail = Event('tail', 0)
        self.RRtime = RRtime
        self.__event_list = []
        self.__index = 0
        self.__RRruntime = 0
        self.preemp = preemp

    def add(self, key, time, preemp=True, priority=1):
        e = Event(key, time, preemp, priority=priority)
        if self.type == 0:
            current = self.__event_head
            while current.next:
                current = current.next
            current.next = e
            self.__event_tail.next = e
        elif self.type == 1:
            if self.__event_head.next == None:
                self.__event_head.next = e
                return None
            if self.preemp:
                current = self.__event_head
            else:
                current = self.__event_head.next
            while current.time > e.time:
                current = current.next
            temp = current.next
            current.next = e
            e.next = temp
            if temp == None:
                self.__event_tail.next = e
        elif self.type == 2:
            if self.__event_head.next == None:
                self.__event_head.next = e
                return None
            if self.preemp and self.__event_head.next.preemp:
                current = self.__event_head
            else:
                current = self.__event_head.next
            # print(e.priority-current.priority)
            while current:
                if current.priority < e.priority: break
                current = current.next
                # print(e.priority - current.priority)
            temp = current.next
            current.next = e
            e.next = temp
            if temp == None:
                self.__event_tail.next = e
        elif self.type == 3:
            self.__event_list.append(e)

    def out(self):
        if self.type == 3:
            for i in self.__event_list:
                print(i.key, i.time)
            print(555)
            if len(self.__event_list) == 0:
                return None
            return self.__event_list[self.__index].key
        return self.__event_head.next.key

    def time_pass(self, time):
        time = time * self.factor
        if self.type == 3:
            self.__RRruntime += time
            while self.__RRruntime > self.RRtime:
                # for i in self.__event_list:
                #     print(i.key, i.time)
                # print('----------',self.__RRruntime)
                if self.__event_list[self.__index].time > self.RRtime:
                    self.__event_list[self.__index].time -= self.RRtime
                    self.__RRruntime -= self.RRtime
                    self.__index += 1
                else:
                    time -= self.__event_list[self.__index].time
                    self.__event_list.pop(self.__index)
                if len(self.__event_list) != 0:
                    self.__index = self.__index % len(self.__event_list)
                else:
                    self.__index = 0
                    self.__RRruntime = 0
                    break

            return None
        current = self.__event_head.next
        # current = self.__event_head.next
        while time >= current.time:
            temp = current.next
            time -= current.time
            del current
            self.__event_head.next = temp
            current = temp
        current.time -= time

    def set_fert(self, time):
        self.__event_head.next.time = time

    def urgent_interupt(self):
        pass

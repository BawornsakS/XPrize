from scheduling import Sch

thread1 = Sch('FCFS')

thread1.add('hand', 12)
thread1.add('ppp', 4)
thread1.time_pass(5)
thread1.add('head', 22)
thread1.add('leg', 15)

thread2 = Sch('RR', preemp=True,RRtime=6)
thread2.add('A',12,priority=2,preemp=True)
# thread2.time_pass(5)
thread2.add('C',4)
thread2.add('B',7,priority=7)
thread2.time_pass(17)
print(thread2.out())


thread1.time_pass(40)
print(thread1.out())

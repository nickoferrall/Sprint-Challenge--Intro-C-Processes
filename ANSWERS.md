**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

New = process is about to be created but has not yet been created.

Ready = Process is loaded into the main memory. It's ready to run and is waiting to get CPU time to for its execution. Processes that are ready are maintained in a queue.

Blocked or wait = whenever the process needs input from the user or needs access to the critical region. It waits in the main memory and doesn't require CPU.

Terminated = process is killed as well as PCB is deleted.

Suspend ready = process that was in ready state but were swapped out of the main memory and placed in external storage.

Suspend wait = lack of main memory meant that the process was moved to secondary memory

**2. What is a zombie process?**

It's a pid, an exit status, that stays around until wait (garbage collection) is called.

**3. How does a zombie process get created? How does one get destroyed?**

It's created using fork.

Wait destroys the zombie process.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Compiled languages, such as C, take the source code and compile it into machine code.
This makes it faster for other computers to process and it keeps the source code private.

Interpreted languages such as JS and PHP do not compile the source code. They pass the source code to other computers that then interpret the source code.
Intepreted languages are cross-platform compatable, simpler to test and easier to debug


------------------------------
Initialize semaphores...

------------------------------
Initialize planes...
FLYING id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:0
FLYING id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:0
FLYING id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:0
FLYING id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:0
FLYING id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:0
FLYING id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:0
FLYING id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:0
FLYING id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:0
FLYING id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:0
FLYING id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:0
FLYING id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:0
FLYING id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:0
FLYING id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:0
FLYING id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:0
FLYING id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:0
FLYING id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:0
FLYING id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:0
FLYING id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:0
FLYING id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:0
FLYING id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:0
FLYING id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:0
FLYING id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:0
FLYING id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:0
FLYING id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:0
FLYING id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:0

------------------------------
Begin simulation...
A new emergency plane with id 5 has entered airspace. 
ARRIVE id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:1
 -Plane 5: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:GHOST
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 5: remove() FREE_RUNWAY has value 3
 -Plane 5: remove() pthread_mutex_lock(FREE_RUNWAY + plane->target_runway).
PLANE TARGET RUNWAY: 0, 1, 0, 0
 -Plane 5: finished remove()
<-------------------------------------------------->
  ---BUFFER---
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
ARRIVE id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:1
 -Plane 7: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 7: remove() FREE_RUNWAY has value 2
 -Plane 7: remove() pthread_mutex_lock(FREE_RUNWAY + plane->target_runway).
PLANE TARGET RUNWAY: 1, 1, 1, 0
 -Plane 7: finished remove()
<-------------------------------------------------->
  ---BUFFER---
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:ARRIVE id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:1
3:GHOST
</------------------------------------------------->
DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
A new emergency plane with id 6 has entered airspace. 
ARRIVE id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:1
 -Plane 6: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:GHOST
</------------------------------------------------->
 -Plane 6: remove() FREE_RUNWAY has value 1
 -Plane 6: remove() pthread_mutex_lock(FREE_RUNWAY + plane->target_runway).
PLANE TARGET RUNWAY: 2, 1, 1, 1
 -Plane 6: finished remove()
<-------------------------------------------------->
  ---BUFFER---
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:ARRIVE id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:1
</------------------------------------------------->
DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
A new emergency plane with id 4 has entered airspace. 
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
 -Plane 4: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 4: WAIT() loop.
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
 -Plane 8: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 8: WAIT() loop.
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
 -Plane 3: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 3: WAIT() loop.
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
 -Plane 9: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 9: WAIT() loop.
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
 -Plane 10: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 10: WAIT() loop.
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
 -Plane 11: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 11: WAIT() loop.
A new emergency plane with id 2 has entered airspace. 
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
 -Plane 2: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 2: WAIT() loop.
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
 -Plane 17: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 17: WAIT() loop.
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
 -Plane 15: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 15: WAIT() loop.
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
 -Plane 16: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 16: WAIT() loop.
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
 -Plane 14: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 14: WAIT() loop.
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
 -Plane 13: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 13: WAIT() loop.
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
 -Plane 12: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 12: WAIT() loop.
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
 -Plane 18: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 18: WAIT() loop.
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
 -Plane 19: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 19: WAIT() loop.
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
 -Plane 20: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 20: WAIT() loop.
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
 -Plane 21: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 21: WAIT() loop.
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
 -Plane 22: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 22: WAIT() loop.
A new emergency plane with id 1 has entered airspace. 
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
 -Plane 1: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 1: WAIT() loop.
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
 -Plane 23: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 23: WAIT() loop.
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
 -Plane 24: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 24: WAIT() loop.
A new emergency plane with id 25 has entered airspace. 
ARRIVE id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:1
 -Plane 25: finished insert()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:1
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:2	 runway:0
2:DESCEND id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:2	 runway:1
3:DESCEND id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:2	 runway:2
</------------------------------------------------->
 -Plane 25: WAIT() loop.
LANDING id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:3	 runway:2
LANDING id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:3	 runway:0
LANDING id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:3	 runway:1
CLEARED id:5	 t_start:1	 maxfuel:104	 n_fuel:104.000000	is_emergency:1	 state:4	 runway:0
 -Plane 5: descend_land() FREE_RUNWAY has value 0
 -Plane 5: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 5: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 5: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:1
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:GHOST
2:LANDING id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:3	 runway:1
3:LANDING id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:3	 runway:2
</------------------------------------------------->
 -Plane 4: WAIT() TURN_1
 -Plane 4: WAIT() critical region.
 -Plane 4: WAIT() TURN_2
 -Plane 4: WAIT() found all planes sleeping
 -Plane 4: WAIT() loop.
 -Plane 4: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
CLEARED id:6	 t_start:1	 maxfuel:157	 n_fuel:157.000000	is_emergency:1	 state:4	 runway:2
 -Plane 6: descend_land() FREE_RUNWAY has value 1
 -Plane 6: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 2, func ret: 0, 0, 1, 0 -Plane 6: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
CLEARED id:7	 t_start:1	 maxfuel:112	 n_fuel:112.000000	is_emergency:0	 state:4	 runway:1
 -Plane 10: WAIT() TURN_1
 -Plane 11: WAIT() TURN_1
 -Plane 2: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 15: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 1: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 25: WAIT() TURN_1
 -Plane 25: WAIT() found all planes awake
 -Plane 25: WAIT() critical region.
 -Plane 25: WAIT() found is_next()
 -Plane 25: WAIT() FREE_RUNWAY has value 2
 -Plane 25: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 0
 -Plane 25: WAIT() TURN_2
 -Plane 4: WAIT() critical region.
 -Plane 4: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 11: WAIT() critical region.
 -Plane 11: WAIT() TURN_2
 -Plane 2: WAIT() critical region.
 -Plane 2: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 15: WAIT() critical region.
 -Plane 15: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 1: WAIT() critical region.
 -Plane 1: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 24: WAIT() found all planes sleeping
 -Plane 24: WAIT() loop.
 -Plane 25: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 25: plane_function:if: acquired SEM_BUFFER.
 -Plane 25: remove() FREE_RUNWAY has value 1
 -Plane 25: remove() pthread_mutex_lock(FREE_RUNWAY + plane->target_runway).
PLANE TARGET RUNWAY: 2, 1, 1, 1
 -Plane 25: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:2	 runway:0
 -Plane 4: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 6: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 7: descend_land() FREE_RUNWAY has value 0
 -Plane 7: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 1, func ret: 1, 1, 0, 1 -Plane 7: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 10: WAIT() loop.
 -Plane 11: WAIT() loop.
 -Plane 2: WAIT() loop.
 -Plane 17: WAIT() loop.
 -Plane 15: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 19: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 1: WAIT() loop.
 -Plane 23: WAIT() loop.
LANDING id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:3	 runway:0
CLEARED id:25	 t_start:1	 maxfuel:172	 n_fuel:172.000000	is_emergency:1	 state:4	 runway:0
 -Plane 25: descend_land() FREE_RUNWAY has value 1
 -Plane 25: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 0, 1 -Plane 25: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 24: WAIT() TURN_1
 -Plane 4: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 11: WAIT() TURN_1
 -Plane 2: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 15: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 1: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 23: WAIT() found all planes awake
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 4: WAIT() critical region.
 -Plane 4: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 11: WAIT() critical region.
 -Plane 11: WAIT() TURN_2
 -Plane 2: WAIT() critical region.
 -Plane 2: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 15: WAIT() critical region.
 -Plane 15: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 1: WAIT() critical region.
 -Plane 1: WAIT() found is_next()
 -Plane 1: WAIT() FREE_RUNWAY has value 2
 -Plane 1: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 0, 1
 -Plane 1: WAIT() TURN_2
 -Plane 1: WAIT() found all planes sleeping
 -Plane 1: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 1: plane_function:if: acquired SEM_BUFFER.
 -Plane 1: remove() FREE_RUNWAY has value 1
 -Plane 1: remove() pthread_mutex_lock(FREE_RUNWAY + plane->target_runway).
PLANE TARGET RUNWAY: 1, 1, 1, 1
 -Plane 1: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:2	 runway:0
 -Plane 7: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 4: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 11: WAIT() loop.
 -Plane 2: WAIT() loop.
 -Plane 17: WAIT() loop.
 -Plane 15: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 19: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
LANDING id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:3	 runway:0
CLEARED id:1	 t_start:1	 maxfuel:171	 n_fuel:171.000000	is_emergency:1	 state:4	 runway:0
 -Plane 1: descend_land() FREE_RUNWAY has value 0
 -Plane 1: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 1: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 4: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 11: WAIT() TURN_1
 -Plane 2: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 15: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 22: WAIT() found all planes awake
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 4: WAIT() critical region.
 -Plane 4: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 11: WAIT() critical region.
 -Plane 11: WAIT() TURN_2
 -Plane 2: WAIT() critical region.
 -Plane 2: WAIT() found is_next()
 -Plane 2: WAIT() FREE_RUNWAY has value 1
 -Plane 2: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 2: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 15: WAIT() critical region.
 -Plane 15: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 21: WAIT() found all planes sleeping
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 4: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 11: WAIT() loop.
 -Plane 2: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 2: plane_function:if: acquired SEM_BUFFER.
 -Plane 2: remove() FREE_RUNWAY has value 0
 -Plane 2: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:2	 runway:0
 -Plane 17: WAIT() loop.
 -Plane 15: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 19: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 25: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:3	 runway:0
CLEARED id:2	 t_start:1	 maxfuel:100	 n_fuel:100.000000	is_emergency:1	 state:4	 runway:0
 -Plane 2: descend_land() FREE_RUNWAY has value 0
 -Plane 2: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 2: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 4: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 11: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 15: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 20: WAIT() found all planes awake
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 4: WAIT() critical region.
 -Plane 4: WAIT() found is_next()
 -Plane 4: WAIT() FREE_RUNWAY has value 1
 -Plane 4: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 4: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 11: WAIT() critical region.
 -Plane 11: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 15: WAIT() critical region.
 -Plane 15: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() TURN_2
 -Plane 19: WAIT() found all planes sleeping
 -Plane 19: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 4: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 4: plane_function:if: acquired SEM_BUFFER.
 -Plane 4: remove() FREE_RUNWAY has value 0
 -Plane 4: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:2	 runway:0
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 11: WAIT() loop.
 -Plane 17: WAIT() loop.
 -Plane 15: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 1: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:3	 runway:0
CLEARED id:4	 t_start:1	 maxfuel:170	 n_fuel:170.000000	is_emergency:1	 state:4	 runway:0
 -Plane 4: descend_land() FREE_RUNWAY has value 0
 -Plane 4: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 4: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 11: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 15: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 18: WAIT() found all planes awake
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 11: WAIT() critical region.
 -Plane 11: WAIT() found is_next()
 -Plane 11: WAIT() FREE_RUNWAY has value 1
 -Plane 11: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 11: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 15: WAIT() critical region.
 -Plane 15: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 12: WAIT() found all planes sleeping
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 19: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 11: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 11: plane_function:if: acquired SEM_BUFFER.
 -Plane 11: remove() FREE_RUNWAY has value 0
 -Plane 11: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:2	 runway:0
 -Plane 17: WAIT() loop.
 -Plane 15: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 2: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:11	 t_start:1	 maxfuel:101	 n_fuel:101.000000	is_emergency:0	 state:4	 runway:0
 -Plane 11: descend_land() FREE_RUNWAY has value 0
 -Plane 11: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 11: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 15: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 13: WAIT() found all planes awake
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 15: WAIT() critical region.
 -Plane 15: WAIT() found is_next()
 -Plane 15: WAIT() FREE_RUNWAY has value 1
 -Plane 15: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 15: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 14: WAIT() found all planes sleeping
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 19: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 17: WAIT() loop.
 -Plane 15: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 15: plane_function:if: acquired SEM_BUFFER.
 -Plane 15: remove() FREE_RUNWAY has value 0
 -Plane 15: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:2	 runway:0
 -Plane 16: WAIT() loop.
 -Plane 4: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:15	 t_start:1	 maxfuel:107	 n_fuel:107.000000	is_emergency:0	 state:4	 runway:0
 -Plane 15: descend_land() FREE_RUNWAY has value 0
 -Plane 15: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 15: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 19: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 16: WAIT() found all planes awake
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 19: WAIT() critical region.
 -Plane 19: WAIT() found is_next()
 -Plane 19: WAIT() FREE_RUNWAY has value 1
 -Plane 19: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 19: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 17: WAIT() found all planes sleeping
 -Plane 17: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 19: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 19: plane_function:if: acquired SEM_BUFFER.
 -Plane 19: remove() FREE_RUNWAY has value 0
 -Plane 19: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:2	 runway:0
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 11: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
LANDING id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:19	 t_start:1	 maxfuel:122	 n_fuel:122.000000	is_emergency:0	 state:4	 runway:0
 -Plane 19: descend_land() FREE_RUNWAY has value 0
 -Plane 19: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 19: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 17: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 3: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 10: WAIT() found all planes awake
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 3: WAIT() critical region.
 -Plane 3: WAIT() found is_next()
 -Plane 3: WAIT() FREE_RUNWAY has value 1
 -Plane 3: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 3: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 9: WAIT() found all planes sleeping
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 17: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 3: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 3: plane_function:if: acquired SEM_BUFFER.
 -Plane 3: remove() FREE_RUNWAY has value 0
 -Plane 3: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:2	 runway:0
 -Plane 15: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:3	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:4	 runway:0
 -Plane 3: descend_land() FREE_RUNWAY has value 0
 -Plane 3: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 3: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 17: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 8: WAIT() found all planes awake
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 17: WAIT() critical region.
 -Plane 17: WAIT() found is_next()
 -Plane 17: WAIT() FREE_RUNWAY has value 1
 -Plane 17: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 17: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 24: WAIT() found all planes sleeping
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 17: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 17: plane_function:if: acquired SEM_BUFFER.
 -Plane 17: remove() FREE_RUNWAY has value 0
 -Plane 17: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:2	 runway:0
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 19: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:17	 t_start:1	 maxfuel:126	 n_fuel:126.000000	is_emergency:0	 state:4	 runway:0
 -Plane 17: descend_land() FREE_RUNWAY has value 0
 -Plane 17: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 17: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 18: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 23: WAIT() found all planes awake
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 18: WAIT() critical region.
 -Plane 18: WAIT() found is_next()
 -Plane 18: WAIT() FREE_RUNWAY has value 1
 -Plane 18: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 18: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 22: WAIT() found all planes sleeping
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 18: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 18: plane_function:if: acquired SEM_BUFFER.
 -Plane 18: remove() FREE_RUNWAY has value 0
 -Plane 18: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:2	 runway:0
 -Plane 3: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
LANDING id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:18	 t_start:1	 maxfuel:127	 n_fuel:127.000000	is_emergency:0	 state:4	 runway:0
 -Plane 18: descend_land() FREE_RUNWAY has value 0
 -Plane 18: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 18: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 10: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 21: WAIT() found all planes awake
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 10: WAIT() critical region.
 -Plane 10: WAIT() found is_next()
 -Plane 10: WAIT() FREE_RUNWAY has value 1
 -Plane 10: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 10: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 20: WAIT() found all planes sleeping
 -Plane 20: WAIT() loop.
 -Plane 21: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 10: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 10: plane_function:if: acquired SEM_BUFFER.
 -Plane 10: remove() FREE_RUNWAY has value 0
 -Plane 10: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:2	 runway:0
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 17: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:10	 t_start:1	 maxfuel:145	 n_fuel:145.000000	is_emergency:0	 state:4	 runway:0
 -Plane 10: descend_land() FREE_RUNWAY has value 0
 -Plane 10: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 10: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 20: WAIT() TURN_1
 -Plane 21: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 12: WAIT() found all planes awake
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 21: WAIT() critical region.
 -Plane 21: WAIT() found is_next()
 -Plane 21: WAIT() FREE_RUNWAY has value 1
 -Plane 21: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 21: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 13: WAIT() found all planes sleeping
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 21: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 21: plane_function:if: acquired SEM_BUFFER.
 -Plane 21: remove() FREE_RUNWAY has value 0
 -Plane 21: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:2	 runway:0
 -Plane 22: WAIT() loop.
 -Plane 18: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
LANDING id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:21	 t_start:1	 maxfuel:150	 n_fuel:150.000000	is_emergency:0	 state:4	 runway:0
 -Plane 21: descend_land() FREE_RUNWAY has value 0
 -Plane 21: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 8: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 14: WAIT() found all planes awake
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 8: WAIT() critical region.
 -Plane 8: WAIT() found is_next()
 -Plane 8: WAIT() FREE_RUNWAY has value 1
 -Plane 8: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 8: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 16: WAIT() found all planes sleeping
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 22: WAIT() loop.
 -Plane 23: WAIT() loop.
 -Plane 24: WAIT() loop.
 -Plane 8: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 8: plane_function:if: acquired SEM_BUFFER.
 -Plane 8: remove() FREE_RUNWAY has value 0
 -Plane 8: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:2	 runway:0
 -Plane 9: WAIT() loop.
 -Plane 10: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 21: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
LANDING id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:8	 t_start:1	 maxfuel:153	 n_fuel:153.000000	is_emergency:0	 state:4	 runway:0
 -Plane 8: descend_land() FREE_RUNWAY has value 0
 -Plane 8: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 8: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 22: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 9: WAIT() found all planes awake
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 22: WAIT() critical region.
 -Plane 22: WAIT() found is_next()
 -Plane 22: WAIT() FREE_RUNWAY has value 1
 -Plane 22: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 22: WAIT() TURN_2
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 24: WAIT() found all planes sleeping
 -Plane 24: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 20: WAIT() loop.
 -Plane 22: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 22: plane_function:if: acquired SEM_BUFFER.
 -Plane 22: remove() FREE_RUNWAY has value 0
 -Plane 22: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:2	 runway:0
 -Plane 23: WAIT() loop.
 -Plane 21: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:22	 t_start:1	 maxfuel:158	 n_fuel:158.000000	is_emergency:0	 state:4	 runway:0
 -Plane 22: descend_land() FREE_RUNWAY has value 0
 -Plane 22: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 22: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 24: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 20: WAIT() TURN_1
 -Plane 23: WAIT() TURN_1
 -Plane 23: WAIT() found all planes awake
 -Plane 23: WAIT() critical region.
 -Plane 23: WAIT() found is_next()
 -Plane 23: WAIT() FREE_RUNWAY has value 1
 -Plane 23: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 23: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() TURN_2
 -Plane 20: WAIT() found all planes sleeping
 -Plane 20: WAIT() loop.
 -Plane 23: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 23: plane_function:if: acquired SEM_BUFFER.
 -Plane 23: remove() FREE_RUNWAY has value 0
 -Plane 23: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:2	 runway:0
 -Plane 8: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
 -Plane 24: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
LANDING id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:23	 t_start:1	 maxfuel:160	 n_fuel:160.000000	is_emergency:0	 state:4	 runway:0
 -Plane 23: descend_land() FREE_RUNWAY has value 0
 -Plane 23: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 23: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 20: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 12: WAIT() found all planes awake
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 20: WAIT() critical region.
 -Plane 20: WAIT() found is_next()
 -Plane 20: WAIT() FREE_RUNWAY has value 1
 -Plane 20: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 20: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 13: WAIT() found all planes sleeping
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 20: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 20: plane_function:if: acquired SEM_BUFFER.
 -Plane 20: remove() FREE_RUNWAY has value 0
 -Plane 20: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:2	 runway:0
 -Plane 24: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 22: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:20	 t_start:1	 maxfuel:163	 n_fuel:163.000000	is_emergency:0	 state:4	 runway:0
 -Plane 20: descend_land() FREE_RUNWAY has value 0
 -Plane 20: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 20: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 24: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 14: WAIT() found all planes awake
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 24: WAIT() critical region.
 -Plane 24: WAIT() found is_next()
 -Plane 24: WAIT() FREE_RUNWAY has value 1
 -Plane 24: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 24: WAIT() TURN_2
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 16: WAIT() found all planes sleeping
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: WAIT() loop.
 -Plane 12: WAIT() loop.
 -Plane 24: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 24: plane_function:if: acquired SEM_BUFFER.
 -Plane 24: remove() FREE_RUNWAY has value 0
 -Plane 24: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:2	 runway:0
 -Plane 9: WAIT() loop.
 -Plane 23: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:DESCEND id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:2	 runway:0
2:GHOST
3:GHOST
</------------------------------------------------->
LANDING id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:3	 runway:0
CLEARED id:24	 t_start:1	 maxfuel:164	 n_fuel:164.000000	is_emergency:0	 state:4	 runway:0
 -Plane 24: descend_land() FREE_RUNWAY has value 0
 -Plane 24: pthread_mutex_unlock(FREE_RUNWAY).
Freeing runway 0, func ret: 0, 0, 1, 1 -Plane 24: descend_land() pthread_mutex_lock(SEM_WAIT_DONE).
 -Plane 16: WAIT() TURN_1
 -Plane 14: WAIT() TURN_1
 -Plane 13: WAIT() TURN_1
 -Plane 12: WAIT() TURN_1
 -Plane 9: WAIT() TURN_1
 -Plane 9: WAIT() found all planes awake
 -Plane 9: WAIT() critical region.
 -Plane 9: WAIT() TURN_2
 -Plane 16: WAIT() critical region.
 -Plane 16: WAIT() TURN_2
 -Plane 14: WAIT() critical region.
 -Plane 14: WAIT() TURN_2
 -Plane 13: WAIT() critical region.
 -Plane 13: WAIT() found is_next()
 -Plane 13: WAIT() FREE_RUNWAY has value 1
 -Plane 13: WAIT() pthread_mutex_unlock(FREE_RUNWAY).
PLANE TARGET RUNWAY: 0, 1, 1, 1
 -Plane 13: WAIT() TURN_2
 -Plane 12: WAIT() critical region.
 -Plane 12: WAIT() TURN_2
 -Plane 12: WAIT() found all planes sleeping
 -Plane 12: WAIT() loop.
 -Plane 9: WAIT() loop.
 -Plane 16: WAIT() loop.
 -Plane 14: WAIT() loop.
 -Plane 13: plane_function:if: try to acquire SEM_BUFFER.
 -Plane 13: plane_function:if: acquired SEM_BUFFER.
 -Plane 13: remove() FREE_RUNWAY has value 0
 -Plane 13: finished remove()
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
</------------------------------------------------->
  ---RUNWAYS---
1:ARRIVE id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:1
2:GHOST
3:GHOST
</------------------------------------------------->
DESCEND id:13	 t_start:1	 maxfuel:178	 n_fuel:178.000000	is_emergency:0	 state:2	 runway:0
 -Plane 20: descend_land() EXIT
<-------------------------------------------------->
  ---BUFFER---
ARRIVE id:9	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:12	 t_start:1	 maxfuel:180	 n_fuel:180.000000	is_emergency:0	 state:1
ARRIVE id:14	 t_start:1	 maxfuel:183	 n_fuel:183.000000	is_emergency:0	 state:1
ARRIVE id:16	 t_start:1	 maxfuel:190	 n_fuel:190.000000	is_emergency:0	 state:1
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHOST
GHO
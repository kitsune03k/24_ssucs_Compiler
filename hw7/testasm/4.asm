	      INT   0, 664
	      SUP   0, main
	      RET   0, 0
sInit:
	      INT   0, 16
	      LDA   1, 12
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L2:
	      LOD   1, 12
	     LITI   0, 101
	     LSSI   0, 0
	      JPC   0, L3
	      LDA   0, 12
	      LOD   1, 12
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L1:
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L2
L3:
	      LDA   0, 416
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
	      RET   0, 0
sCount:
	      INT   0, 12
	      LDA   1, -4
	      LOD   0, 416
	      STO   0, 1
	      RET   0, 0
	      RET   0, 0
sEmpty:
	      INT   0, 12
	      LOD   0, 416
	      NOT   0, 0
	      JPC   0, L4
	      LDA   1, -4
	     LITI   0, 1
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L5
L4:
	      LDA   1, -4
	     LITI   0, 0
	      STO   0, 1
	      RET   0, 0
L5:
	      RET   0, 0
sPeek:
	      INT   0, 12
	      INT   0, 16
	      POP   0, 3
	     ADDR   0, sEmpty
	      CAL   0, 0
	      NOT   0, 0
	      JPC   0, L6
	      LDA   1, -4
	      LDA   0, 12
	      LOD   0, 416
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	      LDI   0, 1
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L7
L6:
	      INT   0, 12
	      LDA   0, 420
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      LDA   1, -4
	     LITI   0, 1
	   MINUSI   0, 0
	      STO   0, 1
	      RET   0, 0
L7:
	      RET   0, 0
sPop:
	      INT   0, 16
	      INT   0, 16
	      POP   0, 3
	     ADDR   0, sEmpty
	      CAL   0, 0
	      NOT   0, 0
	      JPC   0, L8
	      LDA   1, 12
	      LDA   0, 12
	      LOD   0, 416
	      LDA   0, 416
	      LDX   0, 1
	     DECI   0, 0
	      STO   0, 1
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	      LDI   0, 1
	      STX   0, 1
	      POP   0, 1
	      LDA   1, -4
	      LOD   1, 12
	      STO   0, 1
	      RET   0, 0
	      JMP   0, L9
L8:
	      INT   0, 12
	      LDA   0, 444
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      LDA   1, -4
	     LITI   0, 1
	   MINUSI   0, 0
	      STO   0, 1
	      RET   0, 0
L9:
	      RET   0, 0
sPush:
	      INT   0, 16
	      INT   0, 16
	      POP   0, 3
	     ADDR   0, sCount
	      CAL   0, 0
	     LITI   0, 100
	     LSSI   0, 0
	      JPC   0, L10
	      LDA   0, 12
	      LDA   0, 416
	      LDX   0, 1
	     INCI   0, 0
	      STX   0, 1
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	      LOD   1, 12
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L11
L10:
	      INT   0, 12
	      LDA   0, 464
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L11:
	      RET   0, 0
sClear:
	      INT   0, 12
	      LDA   0, 416
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
	      INT   0, 12
	      LDA   0, 488
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
sShow:
	      INT   0, 16
	      INT   0, 12
	      LDA   0, 508
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 16
	      POP   0, 3
	     ADDR   0, sEmpty
	      CAL   0, 0
	      NOT   0, 0
	      JPC   0, L12
	      LDA   1, 12
	      LOD   0, 416
	      STX   0, 1
	      POP   0, 1
L14:
	      LOD   1, 12
	     LITI   0, 0
	     GTRI   0, 0
	      JPC   0, L15
	      LOD   1, 12
	      LOD   0, 416
	     EQLI   0, 0
	      JPC   0, L16
	      INT   0, 12
	      LDA   0, 532
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      JMP   0, L17
L16:
	      LOD   1, 12
	     LITI   0, 1
	     EQLI   0, 0
	      JPC   0, L18
	      INT   0, 12
	      LDA   0, 544
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      JMP   0, L19
L18:
	      INT   0, 12
	      LDA   0, 556
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L19:
L17:
	      INT   0, 12
	      LDA   0, 568
	      LDA   0, 12
	      LOD   1, 12
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	      LDI   0, 1
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 576
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L13:
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 1
	     DECI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L14
L15:
	      JMP   0, L20
L12:
	      INT   0, 12
	      LDA   0, 584
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
L20:
	      INT   0, 12
	      LDA   0, 608
	      POP   0, 4
	     ADDR   0, printf
	      CAL   0, 0
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	     LITI   0, 1
	      STX   0, 1
	      POP   0, 1
L22:
	      LOD   1, 12
	     LITI   0, 2024
	     LSSI   0, 0
	      JPC   0, L23
	      INT   0, 12
	      LOD   1, 12
	      POP   0, 4
	     ADDR   0, sPush
	      CAL   0, 0
	      LDA   1, 12
	      LOD   1, 12
	     LITI   0, 2
	     MULI   0, 0
	      STX   0, 1
	      POP   0, 1
L21:
	      JMP   0, L22
L23:
	      INT   0, 12
	      POP   0, 3
	     ADDR   0, sShow
	      CAL   0, 0
	      LDA   1, 16
	     LITI   0, 0
	      STX   0, 1
	      POP   0, 1
L25:
	      LOD   1, 16
	     LITI   0, 3
	     LSSI   0, 0
	      JPC   0, L26
	      INT   0, 12
	      LDA   0, 632
	      INT   0, 16
	      POP   0, 3
	     ADDR   0, sPop
	      CAL   0, 0
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
L24:
	      LOD   1, 16
	      LDA   1, 16
	      LDX   0, 1
	     INCI   0, 0
	      STO   0, 1
	      POP   0, 1
	      JMP   0, L25
L26:
	      INT   0, 12
	      POP   0, 3
	     ADDR   0, sShow
	      CAL   0, 0
	      LDA   1, 16
	     LITI   0, 3
	      STX   0, 1
	      POP   0, 1
L28:
	      LOD   1, 16
	     LITI   0, 10
	     LSSI   0, 0
	      JPC   0, L29
	      LDA   1, 12
	      LOD   1, 16
	     LITI   0, 111
	     MULI   0, 0
	      STX   0, 1
	      POP   0, 1
	      INT   0, 12
	      LOD   1, 12
	      POP   0, 4
	     ADDR   0, sPush
	      CAL   0, 0
	      INT   0, 12
	      LDA   0, 648
	      LOD   1, 12
	      POP   0, 5
	     ADDR   0, printf
	      CAL   0, 0
L27:
	      LDA   1, 16
	      LOD   1, 16
	     LITI   0, 3
	     ADDI   0, 0
	      STX   0, 1
	      POP   0, 1
	      JMP   0, L28
L29:
	      INT   0, 12
	      POP   0, 3
	     ADDR   0, sShow
	      CAL   0, 0
	      INT   0, 12
	      POP   0, 3
	     ADDR   0, sClear
	      CAL   0, 0
	      INT   0, 12
	      POP   0, 3
	     ADDR   0, sShow
	      CAL   0, 0
	      RET   0, 0
.literal   420  "Nothing to peek!\n"
.literal   444  "Nothing to pop!\n"
.literal   464  "Exceed stack limit!\n"
.literal   488  "Stack cleared!\n"
.literal   508  "\n==== STACK ====\n"
.literal   532  " TOP -> "
.literal   544  "BASE -> "
.literal   556  "        "
.literal   568  "%d"
.literal   576  "\n"
.literal   584  "Nothing to show!\n"
.literal   608  "===============\n\n"
.literal   632  "%d popped\n"
.literal   648  "%d pushed\n"

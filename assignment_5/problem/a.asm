	      INT 0, 32
	      SUP 0, main
	      RET 0, 0
main:
	      INT 0, 20
	      LDA 1, 12
	      INT 0, 16
	     LITI 0, 4
	     LITI 0, 4
	     MULI 0, 0
	      POP 0, 4
	     ADDR 0, malloc
	      CAL 0, 0
	      STX 0, 1
	      POP 0, 1
	      LDA 1, 16
	     LITI 0, 0
	      STX 0, 1
	      POP 0, 1
L2:
	      LOD 1, 16
	     LITI 0, 4
	     LSSI 0, 0
	      JPC 0, L3
	      LOD 1, 12
	      LOD 1, 16
	     LITI 0, 4
	     MULI 0, 0
	   OFFSET 0, 0
	      LOD 1, 16
	      STX 0, 1
	      POP 0, 1
L1:
	      LDA 1, 16
	      LDX 0, 1
	     INCI 0, 0
	      STX 0, 1
	      POP 0, 1
	      JMP 0, L2
L3:
	      LDA 1, 16
	     LITI 0, 0
	      STX 0, 1
	      POP 0, 1
L5:
	      LOD 1, 16
	     LITI 0, 4
	     LSSI 0, 0
	      JPC 0, L6
	      INT 0, 12
	      LDA 0, 12
	      LOD 1, 16
	      LOD 1, 12
	      LOD 1, 16
	     LITI 0, 4
	     MULI 0, 0
	     ADDI 0, 0
	      LDI 0, 1
	      POP 0, 6
	     ADDR 0, printf
	      CAL 0, 0
L4:
	      LOD 1, 16
	      LDA 1, 16
	      LDX 0, 1
	     INCI 0, 0
	      STO 0, 1
	      POP 0, 1
	      JMP 0, L5
L6:
	      RET 0, 0
.literal 12 "arr[%d] : %d\n"

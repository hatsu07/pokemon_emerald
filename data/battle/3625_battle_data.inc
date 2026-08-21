	@ Status-condition string table indexed by atk76_various before
	@ passing the selected string to TryGetStatusString.
	.globl gStatusConditionStringsTable
gStatusConditionStringsTable: @ 0x085AC04C
	.4byte gText_Rom_5ABEBC @ status string index 0
	.4byte gText_Rom_5ABEE3 @ status string index 1
	.4byte gText_Rom_5ABF06 @ status string index 2
	.4byte gText_Rom_5ABF2D @ status string index 3
	.4byte gText_Rom_5ABF56 @ status string index 4
	.4byte gText_Rom_5ABF56 + 0x2B @ status string index 5
	.4byte gText_Rom_5ABF56 + 0x4E @ status string index 6
	.4byte gText_Rom_5ABFC7 @ status string index 7
	.4byte gText_Rom_5ABFFA + 0x32 @ status string index 8

	@ JP battle text/control strings immediately following the status table.
	@ The first four are externally pointed to from the preceding battle data;
	@ the fifth is the contiguous terminal control string before 0x085AC0B1.

	.globl sBattleStatusText_JP_0
sBattleStatusText_JP_0: @ 0x085AC070
	.byte 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x01, 0x07, 0x27, 0x22, 0x13, 0xFE, 0x0A, 0x03, 0x0B, 0x2E
	.byte 0x00, 0x0C, 0x1F, 0x0D, 0x06, 0xAC, 0xFF

	.globl sBattleStatusText_JP_1
sBattleStatusText_JP_1: @ 0x085AC087
	.byte 0xFD, 0x23, 0x1A, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x01, 0x07, 0x27, 0x22, 0x10, 0xAB
	.byte 0xFF

	.globl sBattleStatusText_JP_2
sBattleStatusText_JP_2: @ 0x085AC098
	.byte 0xFD, 0x25, 0xFF

	.globl sBattleStatusText_JP_3
sBattleStatusText_JP_3: @ 0x085AC09B
	.byte 0xFD, 0x31, 0xFF

	.globl sBattleStatusText_JP_4
sBattleStatusText_JP_4: @ 0x085AC09E
	.byte 0xFC, 0x10, 0x11, 0x00, 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0x16, 0x3A, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AC0B1: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AC0B1
gBattleMessageData_085AC0B1: @ 0x085AC0B1
	@ analyzed canonical ROM range 0x085AC0B1-0x085AC0C0
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x1CFD, 0x0019, 0x1DFD, 0x14FE, 0x0019, 0x360C, 0x4803, 0x0016

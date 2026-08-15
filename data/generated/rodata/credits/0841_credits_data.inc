	@ pret/pokeemerald-jp direct xref for 0x08566CC7: record_mixing.s: ShufflePlayerIndices
	@ Player index shuffle orders used by ShufflePlayerIndices.
	.globl sPlayerIdxOrders_2Player
sPlayerIdxOrders_2Player: @ 0x08566CC7
	.byte 1, 0

	.globl sPlayerIdxOrders_3Player
sPlayerIdxOrders_3Player: @ 0x08566CC9
	.byte 1, 2, 0
	.byte 2, 0, 1

	.globl sPlayerIdxOrders_4Player
sPlayerIdxOrders_4Player: @ 0x08566CCF
	.byte 1, 0, 3, 2
	.byte 3, 0, 1, 2
	.byte 2, 0, 3, 1
	.byte 1, 3, 0, 2
	.byte 2, 3, 0, 1
	.byte 3, 2, 0, 1
	.byte 1, 2, 3, 0
	.byte 2, 3, 1, 0
	.byte 3, 2, 1, 0

	@ Daycare mail swap pairings selected during record mixing.
	.globl sDaycareMailSwapIds_3Player
sDaycareMailSwapIds_3Player: @ 0x08566CF3
	.byte 0, 1
	.byte 1, 2
	.byte 2, 0

	.globl sDaycareMailSwapIds_4Player
sDaycareMailSwapIds_4Player: @ 0x08566CF9
	.byte 0, 1, 2, 3 @ 0 swaps with 1; 2 swaps with 3
	.byte 0, 2, 1, 3
	.byte 0, 3, 2, 1

	.if (. - sDaycareMailSwapIds_4Player) != 12
	.error "4-player daycare mail swap table size mismatch"
	.endif

	@ Align the following 32-bit record-mixing data to its original address 0x08566D08.
	.balign 4, 0

	.globl gRecordMixingData_08566D08
gRecordMixingData_08566D08: @ 0x08566D08
	@ analyzed canonical ROM range 0x08566D08-0x08566D0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x4
	.byte 0xF0, 0x01, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08566D0C: record_mixing.s: sub_080E8320, sub_080E9410
	.globl gRecordMixingData_08566D0C
gRecordMixingData_08566D0C: @ 0x08566D0C
	@ analyzed canonical ROM range 0x08566D0C-0x08566D2B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x0100, 0x1C01, 0x0F04, 0x0014, 0x0100, 0x1C08, 0x0F04, 0x0084
	.2byte 0x0100, 0x1C0F, 0x0F04, 0x00F4, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08566D2C: record_mixing.s: SanitizeDayCareMailForRuby
	.globl gRecordMixingData_08566D2C
gRecordMixingData_08566D2C: @ 0x08566D2C
	@ analyzed canonical ROM range 0x08566D2C-0x08566D3D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x12
	.byte 0x5B, 0x53, 0x7E, 0x95, 0x61, 0x82, 0xA0, 0x58, 0x00, 0xBB, 0xB0, 0x0B, 0x02, 0x0E, 0x02, 0x00
	.byte 0xBC, 0xB0

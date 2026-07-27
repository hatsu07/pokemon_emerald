	@ asm/battle_records.s:701 ShowLinkBattleRecords
	.globl gText_Rom_593801
gText_Rom_593801: @ 0x08593801
	.string "かち　　　　まけ　　　ひきわけ$"
	.if (. - gText_Rom_593801) > 0x10
	.error "gText_Rom_593801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_593801) < 0x10
	.space 0x10 - (. - gText_Rom_593801)
	.endif
	.globl gUnknown_8593811
gUnknown_8593811: @ 0x08593811

	@ asm/battle_records.s:542 PrintLinkBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593811
gText_Rom_593811: @ 0x08593811
	.string "ーーーーー$"
	.if (. - gText_Rom_593811) != 0x6
	.error "gText_Rom_593811 must retain its original byte length"
	.endif
	.globl gText_Rom_593812
	.set gText_Rom_593812, gText_Rom_593811 + 0x1
	.globl gText_Rom_593813
	.set gText_Rom_593813, gText_Rom_593811 + 0x2
	.globl gUnknown_8593817
gUnknown_8593817: @ 0x08593817

	@ src/battle_records.c:90 sText_DashesNoScore
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593817
gText_Rom_593817: @ 0x08593817
	.string "----$"
	.if (. - gText_Rom_593817) != 0x5
	.error "gText_Rom_593817 must retain its original byte length"
	.endif
	.globl gText_Rom_593818
	.set gText_Rom_593818, gText_Rom_593817 + 0x1
	.globl gUnknown_859381C
gUnknown_859381C: @ 0x0859381C
	.incbin "baserom.gba", 0x59381c, 0x20
	.globl gUnknown_859383C
gUnknown_859383C: @ 0x0859383C
	.incbin "baserom.gba", 0x59383c, 0x134
	.globl gUnknown_8593970
gUnknown_8593970: @ 0x08593970
	.incbin "baserom.gba", 0x593970, 0x2
	.globl gUnknown_8593972
gUnknown_8593972: @ 0x08593972
	.incbin "baserom.gba", 0x593972, 0x6
	.globl gUnknown_8593978
gUnknown_8593978: @ 0x08593978
	.incbin "baserom.gba", 0x593978, 0xc
	.globl gUnknown_8593984
gUnknown_8593984: @ 0x08593984
	.incbin "baserom.gba", 0x593984, 0x1c
	.globl gUnknown_85939A0
gUnknown_85939A0: @ 0x085939A0
	.incbin "baserom.gba", 0x5939a0, 0x4
	.globl gUnknown_85939A4
gUnknown_85939A4: @ 0x085939A4
	.incbin "baserom.gba", 0x5939a4, 0x8
	.globl gUnknown_85939AC
gUnknown_85939AC: @ 0x085939AC
	.incbin "baserom.gba", 0x5939ac, 0x10
	.globl gUnknown_85939BC
gUnknown_85939BC: @ 0x085939BC
	.incbin "baserom.gba", 0x5939bc, 0xb8
	.globl gUnknown_8593A74
gUnknown_8593A74: @ 0x08593A74
	.incbin "baserom.gba", 0x593a74, 0x10
	.globl gUnknown_8593A84
gUnknown_8593A84: @ 0x08593A84
	.incbin "baserom.gba", 0x593a84, 0x38
	.globl gUnknown_8593ABC
gUnknown_8593ABC: @ 0x08593ABC
	.incbin "baserom.gba", 0x593abc, 0x1e4
	.globl gUnknown_8593CA0
gUnknown_8593CA0: @ 0x08593CA0
	.incbin "baserom.gba", 0x593ca0, 0x6f8
	.globl gUnknown_8594398
gUnknown_8594398: @ 0x08594398
	.incbin "baserom.gba", 0x594398, 0x4e4
	.globl gUnknown_859487C
gUnknown_859487C: @ 0x0859487C
	.incbin "baserom.gba", 0x59487c, 0x4d4
	.globl gUnknown_8594D50
gUnknown_8594D50: @ 0x08594D50
	.incbin "baserom.gba", 0x594d50, 0x6a0
	.globl gUnknown_85953F0
gUnknown_85953F0: @ 0x085953F0
	.incbin "baserom.gba", 0x5953f0, 0x40
	.globl gUnknown_8595430
gUnknown_8595430: @ 0x08595430


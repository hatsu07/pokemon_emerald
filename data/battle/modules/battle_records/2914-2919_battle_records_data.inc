	@ asm/battle_records.s:701 ShowLinkBattleRecords
	.globl gText_Rom_593801
gText_Rom_593801: @ 0x08593801
	.string "かち　　　　まけ　　　ひきわけ{EOS}"
	.if (. - gText_Rom_593801) > 0x10
	.error "gText_Rom_593801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_593801) < 0x10
	.space 0x10 - (. - gText_Rom_593801)
	.endif

	@ asm/battle_records.s:542 PrintLinkBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_593811
gText_Rom_593811: @ 0x08593811
	.string "ーーーーー{EOS}"
	.if (. - gText_Rom_593811) != 0x6
	.error "gText_Rom_593811 must retain its original byte length"
	.endif
	.globl gText_Rom_593812
	.set gText_Rom_593812, gText_Rom_593811 + 0x1
	.globl gText_Rom_593813
	.set gText_Rom_593813, gText_Rom_593811 + 0x2

	@ src/battle_records.c:90 sText_DashesNoScore
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_DashesNoScore
sText_DashesNoScore: @ 0x08593817
	.string "----{EOS}"
	.if (. - sText_DashesNoScore) != 0x5
	.error "sText_DashesNoScore must retain its original byte length"
	.endif

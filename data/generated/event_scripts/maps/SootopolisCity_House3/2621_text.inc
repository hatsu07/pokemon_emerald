	@ data/maps/SootopolisCity_House3/scripts.inc:28 SootopolisCity_House3_Text_LonesomeTryWorkingHarder
	.globl gText_Rom_20F516
gText_Rom_20F516: @ 0x0820F516
	.string "あららん……\nそれは ちょっと さみしいわね\pファンが できるよう がんばりなさいよ!{EOS}"
	.if (. - gText_Rom_20F516) > 0x2c
	.error "gText_Rom_20F516 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F516) < 0x2c
	.space 0x2c - (. - gText_Rom_20F516)
	.endif

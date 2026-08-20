	@ data/maps/AquaHideout_B2F/scripts.inc:89 AquaHideout_B2F_Text_MattIntro (+1 aliases)
	.globl gText_Rom_2180AD
gText_Rom_2180AD: @ 0x082180AD
	.string "ウヒョヒョ……\pもう ここまで きたのか!\nおもって いたより やるな!\pだが ここまでだ!\nおれは これまでの したっぱども とは\lひとあじ ちがう!\pじかんかせぎ なんか しねえで\nおまえを コテンパンに してやるぜ!{EOS}"
	.if (. - gText_Rom_2180AD) > 0x70
	.error "gText_Rom_2180AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2180AD) < 0x70
	.space 0x70 - (. - gText_Rom_2180AD)
	.endif

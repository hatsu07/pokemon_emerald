	@ data/maps/AquaHideout_B1F/scripts.inc:118 AquaHideout_B1F_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_217E76
gText_Rom_217E76: @ 0x08217E76
	.string "ねんりょうの ほきゅう オッケイ!\nおやつも ほきゅう オッケイ!\pあとは ジャマものを ぶっとばす だけ!{EOS}"
	.if (. - gText_Rom_217E76) > 0x37
	.error "gText_Rom_217E76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E76) < 0x37
	.space 0x37 - (. - gText_Rom_217E76)
	.endif

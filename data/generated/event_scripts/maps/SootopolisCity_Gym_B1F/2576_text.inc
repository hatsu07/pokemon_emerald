	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:126 SootopolisCity_Gym_B1F_Text_AnnikaIntro (+1 aliases)
	.globl gText_Rom_20EEE8
gText_Rom_20EEE8: @ 0x0820EEE8
	.string "すっごく めずらしい ポケモンちゃんで\nたたかって あげても いいわよー!{EOS}"
	.if (. - gText_Rom_20EEE8) > 0x26
	.error "gText_Rom_20EEE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EEE8) < 0x26
	.space 0x26 - (. - gText_Rom_20EEE8)
	.endif

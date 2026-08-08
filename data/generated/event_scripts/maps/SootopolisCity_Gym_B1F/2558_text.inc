	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:99 SootopolisCity_Gym_B1F_Text_OliviaIntro (+1 aliases)
	.globl gText_Rom_20EDE1
gText_Rom_20EDE1: @ 0x0820EDE1
	.string "アダンさまと いっしょに\nポケモンを きたえて いるの\pかんたんに たおせると おもわないでね$"
	.if (. - gText_Rom_20EDE1) > 0x30
	.error "gText_Rom_20EDE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EDE1) < 0x30
	.space 0x30 - (. - gText_Rom_20EDE1)
	.endif

	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:117 SootopolisCity_Gym_B1F_Text_BethanyIntro (+1 aliases)
	.globl gText_Rom_20EEA4
gText_Rom_20EEA4: @ 0x0820EEA4
	.string "ポケモンと いっしょに いると\nじかんが あっ というまに すぎるのよ!{EOS}"
	.if (. - gText_Rom_20EEA4) > 0x25
	.error "gText_Rom_20EEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EEA4) < 0x25
	.space 0x25 - (. - gText_Rom_20EEA4)
	.endif

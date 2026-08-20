	@ data/maps/FortreeCity_Gym/scripts.inc:203 FortreeCity_Gym_Text_AshleyPostBattle
	.globl gText_Rom_2047C5
gText_Rom_2047C5: @ 0x082047C5
	.string "ナギさんが いてくれるから\nヒワマキの ひとは あんしんして くらせるの{EOS}"
	.if (. - gText_Rom_2047C5) > 0x25
	.error "gText_Rom_2047C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047C5) < 0x25
	.space 0x25 - (. - gText_Rom_2047C5)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:196 FortreeCity_Gym_Text_AshleyIntro (+1 aliases)
	.globl gText_Rom_204793
gText_Rom_204793: @ 0x08204793
	.string "ナギさんの おしえを うけた あたし!\nそう かんたんに たおされないわ!{EOS}"
	.if (. - gText_Rom_204793) > 0x26
	.error "gText_Rom_204793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204793) < 0x26
	.space 0x26 - (. - gText_Rom_204793)
	.endif

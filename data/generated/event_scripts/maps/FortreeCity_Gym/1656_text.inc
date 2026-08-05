	@ data/maps/FortreeCity_Gym/scripts.inc:213 FortreeCity_Gym_Text_HumbertoDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20481C
gText_Rom_20481C: @ 0x0820481C
	.string "うう!\nおれでは とめられ なかった$"
	.if (. - gText_Rom_20481C) != 0x13
	.error "gText_Rom_20481C must retain its original byte length"
	.endif

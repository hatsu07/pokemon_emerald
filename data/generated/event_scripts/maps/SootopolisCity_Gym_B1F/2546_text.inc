	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:81 SootopolisCity_Gym_B1F_Text_ConnieIntro (+1 aliases)
	.globl gText_Rom_20ECF5
gText_Rom_20ECF5: @ 0x0820ECF5
	.string "おねえさんが しょうぶの きびしさ\nいろいろと おしえて あげちゃおっかな{EOS}"
	.if (. - gText_Rom_20ECF5) > 0x26
	.error "gText_Rom_20ECF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ECF5) < 0x26
	.space 0x26 - (. - gText_Rom_20ECF5)
	.endif

	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:63 SootopolisCity_Gym_B1F_Text_CrissyIntro (+1 aliases)
	.globl gText_Rom_20EC01
gText_Rom_20EC01: @ 0x0820EC01
	.string "せっかく ここまで これたのに\nあたしに まけるから\lアダンさまに あえないわね!{EOS}"
	.if (. - gText_Rom_20EC01) > 0x2a
	.error "gText_Rom_20EC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EC01) < 0x2a
	.space 0x2a - (. - gText_Rom_20EC01)
	.endif

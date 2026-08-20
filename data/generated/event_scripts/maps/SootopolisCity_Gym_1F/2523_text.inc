	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:224 SootopolisCity_Gym_1F_Text_JuanPostRematch
	.globl gText_Rom_20E99E
gText_Rom_20E99E: @ 0x0820E99E
	.string "アダン『わたしの でしに なれと いっても\nきっと ユーは ことわる でしょうね\pせめて わたしが きている コートを\nプレゼント したいの ですが……\lおそらく ユーは うけとらない でしょう\pそれが ジェントルマン というものです\nほっほっほっほ!{EOS}"
	.if (. - gText_Rom_20E99E) > 0x7f
	.error "gText_Rom_20E99E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E99E) < 0x7f
	.space 0x7f - (. - gText_Rom_20E99E)
	.endif

	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:184 SootopolisCity_Gym_1F_Text_JuanIntro (+1 aliases)
	.globl gText_Rom_20E56E
gText_Rom_20E56E: @ 0x0820E56E
	.string "ユーは しっていますか?\pミクリに ポケモンを おしえたのは\nなにをかくそう このアダン……\lすなわち わたくし だということを\pいちどは ジムリーダーから みをひき\nこのジムも かれに まかせて いましたが\lちょっとした リーズン……\lすなわち りゆうが できましてね\lもういちど カムバック したのです\p……おっと\nおしゃべりは これくらいにして\lそろそろ しょうぶを はじめましょう\pさあ ぞんぶんに ごらんなさい\nわたしと ポケモンが おりなす\lみずの イリュージョンを!$"
	.if (. - gText_Rom_20E56E) > 0xf1
	.error "gText_Rom_20E56E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E56E) < 0xf1
	.space 0xf1 - (. - gText_Rom_20E56E)
	.endif

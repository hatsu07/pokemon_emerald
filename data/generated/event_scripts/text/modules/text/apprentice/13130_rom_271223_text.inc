	@ data/text/apprentice.inc:613 gText_ApprenticeWhichMon6
	.globl gText_Rom_271223
gText_Rom_271223: @ 0x08271223
	.string "あっ わーい\n{PLAYER}さん じゃない!\lわたし さっそく ともだちに\lしりあいだって じまん しちゃったよ!\pねえねえ きょうも アドバイス おねがい!\nかんたんな こと だから ねっ!\pジャーン では しつもんです!\nわたしが そだてる なら!\l{STR_VAR_1}と {STR_VAR_2} さあどっち?$"
	.if (. - gText_Rom_271223) > 0x88
	.error "gText_Rom_271223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271223) < 0x88
	.space 0x88 - (. - gText_Rom_271223)
	.endif

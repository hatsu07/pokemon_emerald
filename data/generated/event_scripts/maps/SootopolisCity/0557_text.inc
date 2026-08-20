	@ data/maps/SootopolisCity/scripts.inc:1474 SootopolisCity_Text_WeatherWentWild
	.globl gText_Rom_1E32A3
gText_Rom_1E32A3: @ 0x081E32A3
	.string "きょうの あさは いいてんき だったのよ\nそれが……\pとつぜん くもり はじめたと おもったら\nつよい あめが ふりだして\lかみなりも ゴロゴロ なりだして\lてんきが メチャメチャに なっちゃったの\pそれも これも ぜんぶ\nあの ポケモンの せい かしら……?{EOS}"
	.if (. - gText_Rom_1E32A3) > 0x83
	.error "gText_Rom_1E32A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E32A3) < 0x83
	.space 0x83 - (. - gText_Rom_1E32A3)
	.endif

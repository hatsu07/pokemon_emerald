	@ data/text/match_call.inc:397 MatchCall_PersonalizedText62
	.globl gText_Rom_2687D5
gText_Rom_2687D5: @ 0x082687D5
	.string "{STR_VAR_1}だよ うん……\nきのうは いせきを もとめて\lちがう うみに でようと したら\lみちに まよってしまったよ\pうみを めぐり めぐって\nきがついたら また もとの ばしょさ\pあいかわらず しょうぶも よわいし\nもう わらって くれよ……\pまあ わしは あきらめんぞ\nいつのひか いせきを みつけたら\lわしの じだいが くるだろう からな!\pそういった わけで\nきょうは これで さらばだ!$"
	.if (. - gText_Rom_2687D5) > 0xc4
	.error "gText_Rom_2687D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2687D5) < 0xc4
	.space 0xc4 - (. - gText_Rom_2687D5)
	.endif

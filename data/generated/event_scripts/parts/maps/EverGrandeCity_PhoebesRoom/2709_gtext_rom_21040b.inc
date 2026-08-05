	@ data/maps/EverGrandeCity_PhoebesRoom/scripts.inc:61 EverGrandeCity_PhoebesRoom_Text_IntroSpeech
	.globl gText_Rom_21040B
gText_Rom_21040B: @ 0x0821040B
	.string "アハハ!\pアタシ してんのうの フヨウ\pおくりびやまで しゅぎょう するうちに\nゴーストタイプの ポケモンと きもちを\lかよわせる ことが できるように なったの\pそう アタシと ポケモンの きずな\nとっても つよいんだ!\pそんな アタシの ポケモンたちに\nダメージを あたえる ことが できるか\lためして ごらんよ!$"
	.if (. - gText_Rom_21040B) > 0xa0
	.error "gText_Rom_21040B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21040B) < 0xa0
	.space 0xa0 - (. - gText_Rom_21040B)
	.endif

	@ data/text/match_call.inc:262 MatchCall_PersonalizedText17
	.globl gText_Rom_266FA6
gText_Rom_266FA6: @ 0x08266FA6
	.string "{STR_VAR_1}だけど\nそっちの たびは どんなカンジ?\p……へえー なるほど なるほど\nたのしそうじゃん!\lきみの エピソードで\l1きょく つくれそうだな!\p……おッ うかんできた\nいい フレーズ うかんできたよ!\pじゃ オレ いまから\nきょくづくりに はいるから またな!$"
	.if (. - gText_Rom_266FA6) > 0x85
	.error "gText_Rom_266FA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266FA6) < 0x85
	.space 0x85 - (. - gText_Rom_266FA6)
	.endif

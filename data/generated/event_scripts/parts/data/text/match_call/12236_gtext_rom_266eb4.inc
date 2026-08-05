	@ data/text/match_call.inc:256 MatchCall_PersonalizedText15
	.globl gText_Rom_266EB4
gText_Rom_266EB4: @ 0x08266EB4
	.string "うみの おとこ\n{STR_VAR_1}だぜ!\pやっぱさ!\nでっかい うみに いる トレーナーは\lつよいやつ ばっかりだぜ!\pおまえも オレらを みならって\nうみで しゅぎょうすりゃ いいのによ……\l……と おおなみが きそうだ!\pしゅぎょうの チャンスだぜ!\nわるいけど またなっ!$"
	.if (. - gText_Rom_266EB4) > 0x85
	.error "gText_Rom_266EB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266EB4) < 0x85
	.space 0x85 - (. - gText_Rom_266EB4)
	.endif

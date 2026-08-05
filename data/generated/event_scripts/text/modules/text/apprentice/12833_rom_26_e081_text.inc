	@ data/text/apprentice.inc:169 gText_ApprenticePleaseTeach10
	.globl gText_Rom_26E081
gText_Rom_26E081: @ 0x0826E081
	.string "お おいっ {PLAYER}{KUN}だろ!\nさっき おまわりさんが さがしてたぞ!\p…… …… ……\nなんてね うっそ うそ!\pおいらは {STR_VAR_1} って いうんだ\nこうみえても ポケモンチャンピオンさ!\l……て いうのも ウソ!\pじつは おいら ポケモンしょうぶが\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらの ししょうに なってくれない かな?"
	.byte EOS
	.if (. - gText_Rom_26E081) > 0xac
	.error "gText_Rom_26E081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E081) < 0xac
	.space 0xac - (. - gText_Rom_26E081)
	.endif

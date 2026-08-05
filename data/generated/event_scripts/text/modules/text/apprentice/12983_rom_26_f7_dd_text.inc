	@ data/text/apprentice.inc:391 gText_ApprenticeWhatHeldItem10
	.globl gText_Rom_26F7DD
gText_Rom_26F7DD: @ 0x0826F7DD
	.string "{PLAYER}{KUN} ちょっと\nしんじられん ことが おきた!\pけさ おきたら ポケモンが\nきんのたまを 10コ もってたんだ!\l…… なーんて うっそさ! うわはは!\pじつは おいら ポケモンの どうぐを\nかんがえる こと なんて\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの {STR_VAR_1}\lなにを もたせたら いいのか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_Rom_26F7DD) > 0xb3
	.error "gText_Rom_26F7DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F7DD) < 0xb3
	.space 0xb3 - (. - gText_Rom_26F7DD)
	.endif

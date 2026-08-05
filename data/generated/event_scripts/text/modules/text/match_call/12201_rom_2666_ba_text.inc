	@ data/text/match_call.inc:205 MatchCall_DifferentRouteBattleRequestText12
	.globl gText_Rom_2666BA
gText_Rom_2666BA: @ 0x082666BA
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pわしの ポケモンも あれから\nずいぶんと たくましく なったぞ\p{PLAYER}{KUN}の ポケモンと\nもういちど てあわせ したいのう\p{STR_VAR_2}に おるから\nいつでも きてくれたまえ$"
	.if (. - gText_Rom_2666BA) > 0x61
	.error "gText_Rom_2666BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2666BA) < 0x61
	.space 0x61 - (. - gText_Rom_2666BA)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:644 LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne
	.globl gText_Rom_209216
gText_Rom_209216: @ 0x08209216
	.string "きみも なかなか\nいい トレーナーだと おもうけど\pいまは やっぱり {STR_VAR_1}が\nいちばんだと おもうんだ\pまあ ぼくが おもっている だけだから\nあまり きにしなくて いいよ{EOS}"
	.if (. - gText_Rom_209216) > 0x57
	.error "gText_Rom_209216 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209216) < 0x57
	.space 0x57 - (. - gText_Rom_209216)
	.endif

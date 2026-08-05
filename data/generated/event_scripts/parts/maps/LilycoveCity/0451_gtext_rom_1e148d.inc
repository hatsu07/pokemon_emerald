	@ data/maps/LilycoveCity/scripts.inc:742 LilycoveCity_Text_JustArrivedAndSawRarePokemon
	.globl gText_Rom_1E148D
gText_Rom_1E148D: @ 0x081E148D
	.string "ぼくら しんこん りょこうで\nこのまちに きたばかり なんだけど\pドラゴンタイプの ポケモンが\nそらを とんで いくのを みたんだよ!\pホウエン ちほうには\nあんな かっこいい ポケモンが\lせいそく してるのかい?$"
	.if (. - gText_Rom_1E148D) > 0x6c
	.error "gText_Rom_1E148D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E148D) < 0x6c
	.space 0x6c - (. - gText_Rom_1E148D)
	.endif

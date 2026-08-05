	@ data/text/tv.inc:1117 SlateportCity_PokemonFanClub_Text_ThatsAllForInterview2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24D25C
gText_Rom_24D25C: @ 0x0824D25C
	.string "へー……\nおもしろい はなし だね!\pきみは ほんとうに {STR_VAR_1}と\nなかが いいんだね\pうーん なんか このはなしで\nいい ばんぐみが できそうな よかん!\pきっと おもしろい ばんぐみに\nするから たのしみに まっててね\pじゃあ ありがとうね\nバイバイ!$"
	.if (. - gText_Rom_24D25C) != 0x80
	.error "gText_Rom_24D25C must retain its original byte length"
	.endif

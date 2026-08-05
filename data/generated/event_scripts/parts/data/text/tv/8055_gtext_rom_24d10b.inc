	@ data/text/tv.inc:1105 SlateportCity_PokemonFanClub_Text_ThatsAllForInterview
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24D10B
gText_Rom_24D10B: @ 0x0824D10B
	.string "なるほどー!\pふむふむ……\pあ!\nきょうりょく ありがとうね!\pいろいろ はなしが きけて\nおもしろ かったよ\pこのはなし もしかしたら テレビで\nながすかも しれないから きたい しててね\pじゃあね\nバイバイ!$"
	.if (. - gText_Rom_24D10B) != 0x6b
	.error "gText_Rom_24D10B must retain its original byte length"
	.endif

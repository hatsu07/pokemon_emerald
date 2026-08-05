	@ data/maps/FortreeCity_House4/scripts.inc:74 FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb
	.globl gText_Rom_2052BF
gText_Rom_2052BF: @ 0x082052BF
	.string "よーし!\nおかえり キャモメ!\pあれえ? なに もってるんだ?\pメンタルハーブ かあ……\nどこかで ひろったんだな\pでも ぼく トレーナーじゃ ないからな\nきみに あげるよ!$"
	.if (. - gText_Rom_2052BF) > 0x58
	.error "gText_Rom_2052BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2052BF) < 0x58
	.space 0x58 - (. - gText_Rom_2052BF)
	.endif

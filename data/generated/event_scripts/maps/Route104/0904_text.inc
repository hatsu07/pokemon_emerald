	@ data/maps/Route104/scripts.inc:1141 Route104_Text_BrendanDoingGreatLetsBattle
	.globl gText_Rom_1E80A2
gText_Rom_1E80A2: @ 0x081E80A2
	.string "オレは すごいよ!\nどうだ ポケモン しょうぶで\lそのせいかを ためして やろうか?{EOS}"
	.if (. - gText_Rom_1E80A2) > 0x2b
	.error "gText_Rom_1E80A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E80A2) < 0x2b
	.space 0x2b - (. - gText_Rom_1E80A2)
	.endif

	@ data/text/secret_base_trainers.inc:73 SecretBase_Text_Trainer2Intro
	.globl gText_Rom_2454D6
gText_Rom_2454D6: @ 0x082454D6
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!\pどう ポケモン しょうぶでも するかい?$"
	.if (. - gText_Rom_2454D6) > 0x56
	.error "gText_Rom_2454D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2454D6) < 0x56
	.space 0x56 - (. - gText_Rom_2454D6)
	.endif

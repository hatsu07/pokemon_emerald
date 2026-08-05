	@ data/text/secret_base_trainers.inc:88 SecretBase_Text_Trainer2PreChampion
	.globl gText_Rom_2455A0
gText_Rom_2455A0: @ 0x082455A0
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!$"
	.if (. - gText_Rom_2455A0) > 0x41
	.error "gText_Rom_2455A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2455A0) < 0x41
	.space 0x41 - (. - gText_Rom_2455A0)
	.endif

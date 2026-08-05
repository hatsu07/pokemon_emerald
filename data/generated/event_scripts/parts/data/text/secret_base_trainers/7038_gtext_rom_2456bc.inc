	@ data/text/secret_base_trainers.inc:109 SecretBase_Text_Trainer3Intro
	.globl gText_Rom_2456BC
gText_Rom_2456BC: @ 0x082456BC
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ……\pうん せっかく みつけて くれたんだから\nポケモン しょうぶ しようか?$"
	.if (. - gText_Rom_2456BC) > 0x5c
	.error "gText_Rom_2456BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2456BC) < 0x5c
	.space 0x5c - (. - gText_Rom_2456BC)
	.endif

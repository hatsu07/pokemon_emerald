	@ data/text/apprentice.inc:451 gText_ApprenticeWhatHeldItem14
	.globl gText_Rom_26FE0A
gText_Rom_26FE0A: @ 0x0826FE0A
	.string "あ…… あ……\n{PLAYER}{KUN}……\pそ そんなに みないで くれよ\nワシの ポケモン なにも もってないからさ\pちょっと…… そうだん させて くれよ\nは はずかしいん だけどさ!\l{STR_VAR_1}が なにを\lもったら つよいか って なやんでてさ\l{PLAYER}{KUN} なにが いいと おもう?"
	.byte EOS
	.if (. - gText_Rom_26FE0A) > 0x86
	.error "gText_Rom_26FE0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FE0A) < 0x86
	.space 0x86 - (. - gText_Rom_26FE0A)
	.endif

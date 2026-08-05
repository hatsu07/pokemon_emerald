	@ data/text/apprentice.inc:854 gText_ApprenticePickWinSpeech14
	.globl gText_Rom_27371B
gText_Rom_27371B: @ 0x0827371B
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pまた…… そうだん させて くれよ\nこ これで さいごに するからさ\pあのさ はずかしいん だけどさ\nもし もし しょうぶに かったら!\lワシは なんて いったら いいんだろう……?$"
	.if (. - gText_Rom_27371B) > 0x85
	.error "gText_Rom_27371B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27371B) < 0x85
	.space 0x85 - (. - gText_Rom_27371B)
	.endif

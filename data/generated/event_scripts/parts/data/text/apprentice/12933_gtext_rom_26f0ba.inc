	@ data/text/apprentice.inc:316 gText_ApprenticeWhatHeldItem5
	.globl gText_Rom_26F0BA
gText_Rom_26F0BA: @ 0x0826F0BA
	.string "よっ {PLAYER}{KUN}\nいそがしい わりには よく あうよね!\lオレは きょうは\lウォーキング クリーニング それに\lブラッシングと たいへん そのものさ!\pおかげで だいじな {STR_VAR_1}にも\nどうぐ さえ かって やれなくてねー\pあのさ! じかんも ないから\nなにを {STR_VAR_1}に\lもたせて やったら いいか\lそれだけでも アドバイス してよ!"
	.byte EOS
	.if (. - gText_Rom_26F0BA) > 0xa4
	.error "gText_Rom_26F0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F0BA) < 0xa4
	.space 0xa4 - (. - gText_Rom_26F0BA)
	.endif

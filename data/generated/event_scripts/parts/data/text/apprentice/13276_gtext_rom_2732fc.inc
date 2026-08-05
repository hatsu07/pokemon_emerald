	@ data/text/apprentice.inc:833 gText_ApprenticeWinSpeechThanks10
	.globl gText_Rom_2732FC
gText_Rom_2732FC: @ 0x082732FC
	.string "{STR_VAR_1}\pこう いえば いいのね!\nじゃあ それだけは やめておこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pずっとずっと ありがとう ししょう!\nおいら やっと トレーナーって もんが\lわかった きがするよ!\pいまから いろんな やつと\nしょうぶして かって くるぞ!\lししょう とも しょうぶ するかもな!\pそれじゃな!\nさらばだ ししょう!$"
	.if (. - gText_Rom_2732FC) > 0xbd
	.error "gText_Rom_2732FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2732FC) < 0xbd
	.space 0xbd - (. - gText_Rom_2732FC)
	.endif

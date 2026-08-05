	@ data/text/apprentice.inc:148 gText_ApprenticeRejectTeaching8
	.globl gText_Rom_26DDF2
gText_Rom_26DDF2: @ 0x0826DDF2
	.string "うっわああ!!\n{PLAYER}さんに ことわられた……\lきっ きちょうな けいけん だわっ!\p{PLAYER}さんっ! こんどは\nよい おへんじも きかせて くださいっ!\lわたしに ごしどうを おねがいしますっ!"
	.byte EOS
	.if (. - gText_Rom_26DDF2) > 0x60
	.error "gText_Rom_26DDF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DDF2) < 0x60
	.space 0x60 - (. - gText_Rom_26DDF2)
	.endif

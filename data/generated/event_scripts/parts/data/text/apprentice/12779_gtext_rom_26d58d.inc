	@ data/text/apprentice.inc:91 gText_ApprenticeWhichLevelMode3
	.globl gText_Rom_26D58D
gText_Rom_26D58D: @ 0x0826D58D
	.string "ほんとう ですか? しんじられない!\nあたし なんかの そうだんに\lのってもらえる なんて!\lうれしい です……\pほんとうに くだらないです けど\nあたし には きめられないん です\pバトルタワーって レベルが\nレベル50と オープンレベルと\lふたつ えらべる けど……\pあたし なんか でも がんばれそうな\nレベルって どっちの へや でしょうか?"
	.byte EOS
	.if (. - gText_Rom_26D58D) > 0xb0
	.error "gText_Rom_26D58D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D58D) < 0xb0
	.space 0xb0 - (. - gText_Rom_26D58D)
	.endif

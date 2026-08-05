	@ data/text/apprentice.inc:94 gText_ApprenticeLevelModeThanks3
	.globl gText_Rom_26D63D
gText_Rom_26D63D: @ 0x0826D63D
	.string "{STR_VAR_1} ですか わかりました!\nほんとうに こんな あたしでも\lだいじょうぶ でしょうか\lがんばって みます ダメかも しれないけど\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_Rom_26D63D) > 0x63
	.error "gText_Rom_26D63D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D63D) < 0x63
	.space 0x63 - (. - gText_Rom_26D63D)
	.endif

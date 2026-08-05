	@ data/text/apprentice.inc:502 gText_ApprenticeMonFirstThanks3
	.globl gText_Rom_2703A1
gText_Rom_2703A1: @ 0x082703A1
	.string "{STR_VAR_1} ですか わかりました!\pこんな あたし なんかに\nなんども こたえて いただけるなんて\lしんじられない!\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_Rom_2703A1) > 0x59
	.error "gText_Rom_2703A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2703A1) < 0x59
	.space 0x59 - (. - gText_Rom_2703A1)
	.endif

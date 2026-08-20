	@ data/text/trainers.inc:1469 Route115_Text_NobPostBattle
	.globl gText_Rom_25D24A
gText_Rom_25D24A: @ 0x0825D24A
	.string "ポケモンに カラテを おしえてるんだが\nオレより つよく なりそうで\lちょっと たのしみ なんだ!{EOS}"
	.if (. - gText_Rom_25D24A) > 0x32
	.error "gText_Rom_25D24A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D24A) < 0x32
	.space 0x32 - (. - gText_Rom_25D24A)
	.endif

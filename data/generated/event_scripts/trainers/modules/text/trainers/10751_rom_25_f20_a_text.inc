	@ data/text/trainers.inc:2210 Route120_Text_AngelicaIntro (+1 aliases)
	.globl gText_Rom_25F20A
gText_Rom_25F20A: @ 0x0825F20A
	.string "あたしと ポケモンと パラソル\nどれか ひとつ かけていても\lうつくしさが そこなわれるんだわ{EOS}"
	.if (. - gText_Rom_25F20A) > 0x30
	.error "gText_Rom_25F20A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F20A) < 0x30
	.space 0x30 - (. - gText_Rom_25F20A)
	.endif

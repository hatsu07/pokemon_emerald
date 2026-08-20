	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl gText_Rom_25F4BE
gText_Rom_25F4BE: @ 0x0825F4BE
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!{EOS}"
	.if (. - gText_Rom_25F4BE) > 0x32
	.error "gText_Rom_25F4BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F4BE) < 0x32
	.space 0x32 - (. - gText_Rom_25F4BE)
	.endif

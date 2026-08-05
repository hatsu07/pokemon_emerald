	@ data/text/secret_base_trainers.inc:85 SecretBase_Text_Trainer2PostBattle
	.globl gText_Rom_24556D
gText_Rom_24556D: @ 0x0824556D
	.string "さてと グッズでも かいに いこうかな\pぼくの ひみつきちを\nみんなに たのしんで ほしい からね!$"
	.if (. - gText_Rom_24556D) > 0x33
	.error "gText_Rom_24556D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24556D) < 0x33
	.space 0x33 - (. - gText_Rom_24556D)
	.endif

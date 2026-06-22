# 🚗 Système de Surveillance d'un Véhicule Électrique (BMS & VCU)

ce projet vise à modéliser et concevoir un système de surveillance des paramètres d'un véhicule électrique sous **MATLAB/Simulink/Stateflow**. Le modèle intègre les règles de sécurité fonctionnelle inspirées des standards **AUTOSAR** et **ISO 26262**.

## 🚀 Fonctionnalités du Système
* **Modélisation Multiphysique (Simscape) :** Simulation d'une batterie haute tension (400V) et d'un moteur synchrone à aimants permanents (PMSM).
* **Algorithmes BMS :** Estimation en temps réel de l'état de charge (SOC) par *Coulomb Counting* et de l'état de santé (SOH).
* **Logique de Contrôle (Stateflow) :** Machine d'états gérant les modes *Normal*, *Éco* (bridage de la puissance à 50% en cas de batterie faible ou surchauffe modérée) et *Défaut* (ouverture d'urgence des contacteurs).
* **IHM Dashboard :** Tableau de bord virtuel permettant de visualiser et de tester le comportement en temps réel.
* **Conformité & Génération de code :** Validation via *Model Advisor* et génération automatique de code C certifiable avec *Embedded Coder*.

## 🛠️ Configuration Requise
* MATLAB / Simulink
* Simscape & Simscape Electrical
* Stateflow
* Embedded Coder
